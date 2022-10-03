#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_4096 {
        namespace {
            app::_PrivateImplementationDetails_StaticArrayInitTypeSize_4096__Class* type_info_ref = nullptr;
        }
        app::_PrivateImplementationDetails_StaticArrayInitTypeSize_4096__Class** type_info = &type_info_ref;
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_4096__Class* get_class() {
            return il2cpp::get_nested_class<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_4096__Class>(type_info, "", "<PrivateImplementationDetails>", "__StaticArrayInitTypeSize=4096");
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_4096* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_4096>(get_class());
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_4096__Boxed* box(app::_PrivateImplementationDetails_StaticArrayInitTypeSize_4096 value) {
            return il2cpp::box_value<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_4096__Boxed>(get_class(), value);
        }
    } // namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_4096
} // namespace app::classes::types
