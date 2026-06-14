#pragma once

#include <Core/api/messages/message_box.h>

#include <memory>
#include <unordered_map>

namespace core {

    template <typename T>
    class IDRegistry {
    public:
        IDRegistry() = default;
        IDRegistry(IDRegistry&& other) = delete;
        IDRegistry(IDRegistry const& other) = delete;

        bool has(int id) { return data.contains(id); }
        T& get(int id) { return data[id]; }
        void remove(int id) { data.erase(id); }
        int reserve() { return next_id++; }

    private:
        int next_id = 1;
        std::unordered_map<int, T> data;
    };
} // namespace core
