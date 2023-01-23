#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_6__Class.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_6.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_6__Boxed.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_6 {
        namespace {
            inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_6__Class* type_info_ref = nullptr;
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_6__Class** type_info = &type_info_ref;
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_6__Class* get_class() {
            return il2cpp::get_nested_class<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_6__Class>(type_info, "", "<PrivateImplementationDetails>", "__StaticArrayInitTypeSize=6");
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_6* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_6>(get_class());
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_6__Boxed* box(app::_PrivateImplementationDetails_StaticArrayInitTypeSize_6 value) {
            return il2cpp::box_value<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_6__Boxed>(get_class(), value);
        }
    } // namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_6
} // namespace app::classes::types
