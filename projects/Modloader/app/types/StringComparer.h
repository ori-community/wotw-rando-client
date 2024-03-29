#pragma once
#include <Modloader/app/structs/StringComparer.h>
#include <Modloader/app/structs/StringComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StringComparer {
        inline app::StringComparer__Class** type_info() {
            static app::StringComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StringComparer__Class**)(modloader::win::memory::resolve_rva(0x04735610));
            }
            return cache;
        }
        inline app::StringComparer__Class* get_class() {
            return il2cpp::get_class<app::StringComparer__Class>(type_info(), "System", "StringComparer");
        }
        inline app::StringComparer* create() {
            return il2cpp::create_object<app::StringComparer>(get_class());
        }
    } // namespace StringComparer
} // namespace app::classes::types
