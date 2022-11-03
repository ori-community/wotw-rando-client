#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_2048 {
        namespace {
            inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_2048__Class* type_info_ref = nullptr;
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_2048__Class** type_info = &type_info_ref;
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_2048__Class* get_class() {
            return il2cpp::get_nested_class<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_2048__Class>(type_info, "", "<PrivateImplementationDetails>", "__StaticArrayInitTypeSize=2048");
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_2048* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_2048>(get_class());
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_2048__Boxed* box(app::_PrivateImplementationDetails_StaticArrayInitTypeSize_2048 value) {
            return il2cpp::box_value<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_2048__Boxed>(get_class(), value);
        }
    } // namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_2048
} // namespace app::classes::types
