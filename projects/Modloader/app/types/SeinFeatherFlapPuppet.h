#pragma once
#include <Modloader/app/structs/SeinFeatherFlapPuppet.h>
#include <Modloader/app/structs/SeinFeatherFlapPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinFeatherFlapPuppet {
        inline app::SeinFeatherFlapPuppet__Class** type_info() {
            static app::SeinFeatherFlapPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinFeatherFlapPuppet__Class**)(modloader::win::memory::resolve_rva(0x04751330));
            }
            return cache;
        }
        inline app::SeinFeatherFlapPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinFeatherFlapPuppet__Class>(type_info(), "", "SeinFeatherFlapPuppet");
        }
        inline app::SeinFeatherFlapPuppet* create() {
            return il2cpp::create_object<app::SeinFeatherFlapPuppet>(get_class());
        }
    } // namespace SeinFeatherFlapPuppet
} // namespace app::classes::types
