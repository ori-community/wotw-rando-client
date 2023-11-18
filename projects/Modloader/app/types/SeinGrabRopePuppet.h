#pragma once
#include <Modloader/app/structs/SeinGrabRopePuppet.h>
#include <Modloader/app/structs/SeinGrabRopePuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGrabRopePuppet {
        inline app::SeinGrabRopePuppet__Class** type_info() {
            static app::SeinGrabRopePuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinGrabRopePuppet__Class**)(modloader::win::memory::resolve_rva(0x0474B858));
            }
            return cache;
        }
        inline app::SeinGrabRopePuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinGrabRopePuppet__Class>(type_info(), "", "SeinGrabRopePuppet");
        }
        inline app::SeinGrabRopePuppet* create() {
            return il2cpp::create_object<app::SeinGrabRopePuppet>(get_class());
        }
    } // namespace SeinGrabRopePuppet
} // namespace app::classes::types
