#pragma once
#include <Modloader/app/structs/SeinPlaceholder.h>
#include <Modloader/app/structs/SeinPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPlaceholder {
        inline app::SeinPlaceholder__Class** type_info() {
            static app::SeinPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinPlaceholder__Class**)(modloader::win::memory::resolve_rva(0x047526C0));
            }
            return cache;
        }
        inline app::SeinPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SeinPlaceholder__Class>(type_info(), "", "SeinPlaceholder");
        }
        inline app::SeinPlaceholder* create() {
            return il2cpp::create_object<app::SeinPlaceholder>(get_class());
        }
    } // namespace SeinPlaceholder
} // namespace app::classes::types
