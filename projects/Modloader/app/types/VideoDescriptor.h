#pragma once
#include <Modloader/app/structs/VideoDescriptor.h>
#include <Modloader/app/structs/VideoDescriptor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VideoDescriptor {
        inline app::VideoDescriptor__Class** type_info() {
            static app::VideoDescriptor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VideoDescriptor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VideoDescriptor__Class* get_class() {
            return il2cpp::get_class<app::VideoDescriptor__Class>(type_info(), "", "VideoDescriptor");
        }
        inline app::VideoDescriptor* create() {
            return il2cpp::create_object<app::VideoDescriptor>(get_class());
        }
    } // namespace VideoDescriptor
} // namespace app::classes::types
