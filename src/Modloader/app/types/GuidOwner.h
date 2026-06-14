#pragma once
#include <Modloader/app/structs/GuidOwner.h>
#include <Modloader/app/structs/GuidOwner__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GuidOwner {
        inline app::GuidOwner__Class** type_info() {
            static app::GuidOwner__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GuidOwner__Class**)(modloader::win::memory::resolve_rva(0x04790E00));
            }
            return cache;
        }
        inline app::GuidOwner__Class* get_class() {
            return il2cpp::get_class<app::GuidOwner__Class>(type_info(), "", "GuidOwner");
        }
        inline app::GuidOwner* create() {
            return il2cpp::create_object<app::GuidOwner>(get_class());
        }
    } // namespace GuidOwner
} // namespace app::classes::types
