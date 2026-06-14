#pragma once

// https://stackoverflow.com/a/51497146/3691378
template<auto... ts, class T>
constexpr bool
is_in(const T& t) noexcept(noexcept(((t == ts) || ...))) {
    return ((t == ts) || ...);
}
