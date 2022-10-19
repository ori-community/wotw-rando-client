#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinGrabRopePuppet {
        inline app::SeinGrabRopePuppet__Class** type_info = (app::SeinGrabRopePuppet__Class**)(modloader::win::memory::resolve_rva(0x0474B858));
        inline app::SeinGrabRopePuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinGrabRopePuppet__Class>(type_info, "", "SeinGrabRopePuppet");
        }
        inline app::SeinGrabRopePuppet* create() {
            return il2cpp::create_object<app::SeinGrabRopePuppet>(get_class());
        }
    } // namespace SeinGrabRopePuppet
} // namespace app::classes::types
