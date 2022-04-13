#pragma once

#include <variant>
#include <string>
#include <unordered_map>

namespace randomizer
{
    template<typename T>
    using loading_function = T (*)(std::string path);
    template<typename T, typename I>
    using copy_function = T (*)(I value);

    template<typename T, typename I, loading_function<T> load_func, copy_function<T, I> copy_func>
    class CachedLoader
    {
    public:
        CachedLoader() {}
        CachedLoader(CachedLoader const&) = delete;
        CachedLoader(CachedLoader &&) = delete;

        void load(std::string path)
        {
            cache.emplace(path, load_func(path));
        }

        T get(std::string path)
        {
            auto it = cache.find(path);
            if (it == cache.end())
            {
                load(path);
                it = cache.find(path);
            }

            return copy_func(it->second);
        }

    private:
        std::unordered_map<std::string, T> cache;
    };
}
