#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberDofTextureGenerator__Class.h>
#include <Modloader/app/structs/UberDofTextureGenerator.h>

namespace app::classes::types {
    namespace UberDofTextureGenerator {
        inline app::UberDofTextureGenerator__Class** type_info = (app::UberDofTextureGenerator__Class**)(modloader::win::memory::resolve_rva(0x0472BD20));
        inline app::UberDofTextureGenerator__Class* get_class() {
            return il2cpp::get_class<app::UberDofTextureGenerator__Class>(type_info, "", "UberDofTextureGenerator");
        }
        inline app::UberDofTextureGenerator* create() {
            return il2cpp::create_object<app::UberDofTextureGenerator>(get_class());
        }
    } // namespace UberDofTextureGenerator
} // namespace app::classes::types
