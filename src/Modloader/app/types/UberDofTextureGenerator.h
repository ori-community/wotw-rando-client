#pragma once
#include <Modloader/app/structs/UberDofTextureGenerator.h>
#include <Modloader/app/structs/UberDofTextureGenerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberDofTextureGenerator {
        inline app::UberDofTextureGenerator__Class** type_info() {
            static app::UberDofTextureGenerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberDofTextureGenerator__Class**)(modloader::win::memory::resolve_rva(0x0472BD20));
            }
            return cache;
        }
        inline app::UberDofTextureGenerator__Class* get_class() {
            return il2cpp::get_class<app::UberDofTextureGenerator__Class>(type_info(), "", "UberDofTextureGenerator");
        }
        inline app::UberDofTextureGenerator* create() {
            return il2cpp::create_object<app::UberDofTextureGenerator>(get_class());
        }
    } // namespace UberDofTextureGenerator
} // namespace app::classes::types
