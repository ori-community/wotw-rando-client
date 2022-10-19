#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BuilderInfo {
        inline app::BuilderInfo__Class** type_info = (app::BuilderInfo__Class**)(modloader::win::memory::resolve_rva(0x04741450));
        inline app::BuilderInfo__Class* get_class() {
            return il2cpp::get_class<app::BuilderInfo__Class>(type_info, "", "BuilderInfo");
        }
        inline app::BuilderInfo* create() {
            return il2cpp::create_object<app::BuilderInfo>(get_class());
        }
    } // namespace BuilderInfo
} // namespace app::classes::types
