#pragma once
#include <Modloader/app/structs/CharacterData.h>
#include <Modloader/app/structs/CharacterData__Array.h>
#include <Modloader/app/structs/CharacterData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterData {
        inline app::CharacterData__Class** type_info() {
            static app::CharacterData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharacterData__Class**)(modloader::win::memory::resolve_rva(0x0476FF30));
            }
            return cache;
        }
        inline app::CharacterData__Class* get_class() {
            return il2cpp::get_class<app::CharacterData__Class>(type_info(), "", "CharacterData");
        }
        inline app::CharacterData* create() {
            return il2cpp::create_object<app::CharacterData>(get_class());
        }
        inline app::CharacterData__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterData__Array>(get_class(), size);
        }
        inline app::CharacterData__Array* create_array(const std::vector<app::CharacterData*>& items) {
            return il2cpp::array_new<app::CharacterData__Array>(get_class(), items);
        }
    } // namespace CharacterData
} // namespace app::classes::types
