#pragma once
#include <Modloader/app/structs/KwolokBossTendril_DurationType__Enum.h>
#include <Modloader/app/structs/KwolokBossTendril_DurationType__Enum__Array.h>
#include <Modloader/app/structs/KwolokBossTendril_DurationType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendril_DurationType__Enum {
        inline app::KwolokBossTendril_DurationType__Enum__Class** type_info() {
            static app::KwolokBossTendril_DurationType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KwolokBossTendril_DurationType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0472A810));
            }
            return cache;
        }
        inline app::KwolokBossTendril_DurationType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendril_DurationType__Enum__Class>(type_info(), "", "KwolokBossTendril", "DurationType");
        }
        inline app::KwolokBossTendril_DurationType__Enum* create() {
            return il2cpp::create_object<app::KwolokBossTendril_DurationType__Enum>(get_class());
        }
        inline app::KwolokBossTendril_DurationType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::KwolokBossTendril_DurationType__Enum__Array>(get_class(), size);
        }
        inline app::KwolokBossTendril_DurationType__Enum__Array* create_array(const std::vector<app::KwolokBossTendril_DurationType__Enum*>& items) {
            return il2cpp::array_new<app::KwolokBossTendril_DurationType__Enum__Array>(get_class(), items);
        }
    } // namespace KwolokBossTendril_DurationType__Enum
} // namespace app::classes::types
