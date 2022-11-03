#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_52 {
        namespace {
            inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_52__Class* type_info_ref = nullptr;
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_52__Class** type_info = &type_info_ref;
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_52__Class* get_class() {
            return il2cpp::get_nested_class<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_52__Class>(type_info, "", "<PrivateImplementationDetails>", "__StaticArrayInitTypeSize=52");
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_52* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_52>(get_class());
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_52__Boxed* box(app::_PrivateImplementationDetails_StaticArrayInitTypeSize_52 value) {
            return il2cpp::box_value<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_52__Boxed>(get_class(), value);
        }
    } // namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_52
} // namespace app::classes::types
