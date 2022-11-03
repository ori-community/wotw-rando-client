#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GameMapSavePedestal__Array {
        namespace {
            inline app::GameMapSavePedestal__Array__Class* type_info_ref = nullptr;
        }
        inline app::GameMapSavePedestal__Array__Class** type_info = &type_info_ref;
        inline app::GameMapSavePedestal__Array__Class* get_class() {
            return il2cpp::get_class<app::GameMapSavePedestal__Array__Class>(type_info, "", "GameMapSavePedestal[]");
        }
        inline app::GameMapSavePedestal__Array* create() {
            return il2cpp::create_object<app::GameMapSavePedestal__Array>(get_class());
        }
    } // namespace GameMapSavePedestal__Array
} // namespace app::classes::types
