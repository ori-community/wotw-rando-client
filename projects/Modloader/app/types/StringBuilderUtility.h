#pragma once
#include <Modloader/app/structs/StringBuilderUtility.h>
#include <Modloader/app/structs/StringBuilderUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringBuilderUtility {
        inline app::StringBuilderUtility__Class** type_info() {
            static app::StringBuilderUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StringBuilderUtility__Class**)(modloader::win::memory::resolve_rva(0x04754450));
            }
            return cache;
        }
        inline app::StringBuilderUtility__Class* get_class() {
            return il2cpp::get_class<app::StringBuilderUtility__Class>(type_info(), "CatlikeCoding.Utilities", "StringBuilderUtility");
        }
        inline app::StringBuilderUtility* create() {
            return il2cpp::create_object<app::StringBuilderUtility>(get_class());
        }
    } // namespace StringBuilderUtility
} // namespace app::classes::types
