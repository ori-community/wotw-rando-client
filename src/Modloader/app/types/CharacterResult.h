#pragma once
#include <Modloader/app/structs/CharacterResult.h>
#include <Modloader/app/structs/CharacterResult__Array.h>
#include <Modloader/app/structs/CharacterResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterResult {
        inline app::CharacterResult__Class** type_info() {
            static app::CharacterResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CharacterResult__Class**)(modloader::win::memory::resolve_rva(0x047162B0));
            }
            return cache;
        }
        inline app::CharacterResult__Class* get_class() {
            return il2cpp::get_class<app::CharacterResult__Class>(type_info(), "PlayFab.ClientModels", "CharacterResult");
        }
        inline app::CharacterResult* create() {
            return il2cpp::create_object<app::CharacterResult>(get_class());
        }
        inline app::CharacterResult__Array* create_array(int size) {
            return il2cpp::array_new<app::CharacterResult__Array>(get_class(), size);
        }
        inline app::CharacterResult__Array* create_array(const std::vector<app::CharacterResult*>& items) {
            return il2cpp::array_new<app::CharacterResult__Array>(get_class(), items);
        }
    } // namespace CharacterResult
} // namespace app::classes::types
