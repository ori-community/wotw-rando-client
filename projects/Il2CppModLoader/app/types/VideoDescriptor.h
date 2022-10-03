#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VideoDescriptor {
        namespace {
            app::VideoDescriptor__Class* type_info_ref = nullptr;
        }
        app::VideoDescriptor__Class** type_info = &type_info_ref;
        inline app::VideoDescriptor__Class* get_class() {
            return il2cpp::get_class<app::VideoDescriptor__Class>(type_info, "", "VideoDescriptor");
        }
        inline app::VideoDescriptor* create() {
            return il2cpp::create_object<app::VideoDescriptor>(get_class());
        }
    } // namespace VideoDescriptor
} // namespace app::classes::types
