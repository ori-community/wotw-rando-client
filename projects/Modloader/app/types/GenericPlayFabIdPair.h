#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GenericPlayFabIdPair__Class.h>
#include <Modloader/app/structs/GenericPlayFabIdPair.h>
#include <Modloader/app/structs/GenericPlayFabIdPair__Array.h>

namespace app::classes::types {
    namespace GenericPlayFabIdPair {
        namespace {
            inline app::GenericPlayFabIdPair__Class* type_info_ref = nullptr;
        }
        inline app::GenericPlayFabIdPair__Class** type_info = &type_info_ref;
        inline app::GenericPlayFabIdPair__Class* get_class() {
            return il2cpp::get_class<app::GenericPlayFabIdPair__Class>(type_info, "PlayFab.ClientModels", "GenericPlayFabIdPair");
        }
        inline app::GenericPlayFabIdPair* create() {
            return il2cpp::create_object<app::GenericPlayFabIdPair>(get_class());
        }
        inline app::GenericPlayFabIdPair__Array* create_array(int size) {
            return il2cpp::array_new<app::GenericPlayFabIdPair__Array>(get_class(), size);
        }
        inline app::GenericPlayFabIdPair__Array* create_array(const std::vector<app::GenericPlayFabIdPair*>& items) {
            return il2cpp::array_new<app::GenericPlayFabIdPair__Array>(get_class(), items);
        }
    } // namespace GenericPlayFabIdPair
} // namespace app::classes::types
