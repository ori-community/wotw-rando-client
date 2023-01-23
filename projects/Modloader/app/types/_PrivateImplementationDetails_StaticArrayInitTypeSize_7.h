#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_7__Class.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_7.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_7__Boxed.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_7 {
        namespace {
            inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_7__Class* type_info_ref = nullptr;
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_7__Class** type_info = &type_info_ref;
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_7__Class* get_class() {
            return il2cpp::get_nested_class<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_7__Class>(type_info, "", "<PrivateImplementationDetails>", "__StaticArrayInitTypeSize=7");
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_7* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_7>(get_class());
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_7__Boxed* box(app::_PrivateImplementationDetails_StaticArrayInitTypeSize_7 value) {
            return il2cpp::box_value<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_7__Boxed>(get_class(), value);
        }
    } // namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_7
} // namespace app::classes::types
