#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDashNewPuppet {
        inline app::SeinDashNewPuppet__Class** type_info = (app::SeinDashNewPuppet__Class**)(modloader::win::memory::resolve_rva(0x0472AD78));
        inline app::SeinDashNewPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinDashNewPuppet__Class>(type_info, "", "SeinDashNewPuppet");
        }
        inline app::SeinDashNewPuppet* create() {
            return il2cpp::create_object<app::SeinDashNewPuppet>(get_class());
        }
    } // namespace SeinDashNewPuppet
} // namespace app::classes::types
