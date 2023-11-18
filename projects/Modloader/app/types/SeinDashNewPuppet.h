#pragma once
#include <Modloader/app/structs/SeinDashNewPuppet.h>
#include <Modloader/app/structs/SeinDashNewPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDashNewPuppet {
        inline app::SeinDashNewPuppet__Class** type_info() {
            static app::SeinDashNewPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinDashNewPuppet__Class**)(modloader::win::memory::resolve_rva(0x0472AD78));
            }
            return cache;
        }
        inline app::SeinDashNewPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinDashNewPuppet__Class>(type_info(), "", "SeinDashNewPuppet");
        }
        inline app::SeinDashNewPuppet* create() {
            return il2cpp::create_object<app::SeinDashNewPuppet>(get_class());
        }
    } // namespace SeinDashNewPuppet
} // namespace app::classes::types
