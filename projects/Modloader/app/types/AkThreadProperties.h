#pragma once
#include <Modloader/app/structs/AkThreadProperties.h>
#include <Modloader/app/structs/AkThreadProperties__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkThreadProperties {
        inline app::AkThreadProperties__Class** type_info() {
            static app::AkThreadProperties__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkThreadProperties__Class**)(modloader::win::memory::resolve_rva(0x04788610));
            }
            return cache;
        }
        inline app::AkThreadProperties__Class* get_class() {
            return il2cpp::get_class<app::AkThreadProperties__Class>(type_info(), "", "AkThreadProperties");
        }
        inline app::AkThreadProperties* create() {
            return il2cpp::create_object<app::AkThreadProperties>(get_class());
        }
    } // namespace AkThreadProperties
} // namespace app::classes::types
