/**
 * NoException Standard Library Container Implementation
 * by Marvin Manese 2017
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is furnished to do
 * so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 **/
#ifndef GUARD_NOE_STD_utility_H
#define GUARD_NOE_STD_utility_H

#if __cplusplus >= 201103L
#include <utility>
#endif // __cplusplus >= 201103L

namespace noe_std
{
#if __cplusplus >= 201103L
    template<class First, class Second> using pair = std::pair<First, Second>;
#else
    template<class First, class Second>
    struct pair
    {
        pair() {}
        pair(const First& first_, const Second& second_) : first(first_), second(second_) {}

        First   first;
        Second  second;
    };
#endif // __cplusplus >= 201103L
}

#endif // GUARD_NOE_STD_utility_H
