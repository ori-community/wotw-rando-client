#pragma once

#include <string>
#include <unordered_map>

namespace randomizer
{
    template<typename T>
    using loading_function = T&& (*)(std::string path);
    template<typename T>
    using copy_function = T&& (*)(T const& value);

    template<typename T, loading_function<T> load, copy_function<T> copy>
    class CachedLoader
    {
    public:
        CachedLoader() {}
        CachedLoader(CachedLoader const&) = delete;
        CachedLoader(CachedLoader &&) = delete;

        void load(std::string path)
        {
            cache[path] = std::move(load(path));
        }

        T get(std::string path)
        {
            auto it = cache.find(path);
            if (it == cache.end())
            {
                load(path);
                it = cache.find(path);
            }

            return copy(it->second);
        }

    private:
        std::unordered_map<std::string, T> cache;
    };
}
