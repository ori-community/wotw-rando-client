#pragma once
#include <Modloader/app/structs/StringBuilderCache.h>
#include <Modloader/app/structs/StringBuilderCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringBuilderCache {
        inline app::StringBuilderCache__Class** type_info() {
            static app::StringBuilderCache__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StringBuilderCache__Class**)(modloader::win::memory::resolve_rva(0x04753E88));
            }
            return cache;
        }
        inline app::StringBuilderCache__Class* get_class() {
            return il2cpp::get_class<app::StringBuilderCache__Class>(type_info(), "System.Text", "StringBuilderCache");
        }
        inline app::StringBuilderCache* create() {
            return il2cpp::create_object<app::StringBuilderCache>(get_class());
        }
    } // namespace StringBuilderCache
} // namespace app::classes::types
