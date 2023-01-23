#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_98__Class.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_98.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_98__Boxed.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_98 {
        namespace {
            inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_98__Class* type_info_ref = nullptr;
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_98__Class** type_info = &type_info_ref;
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_98__Class* get_class() {
            return il2cpp::get_nested_class<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_98__Class>(type_info, "", "<PrivateImplementationDetails>", "__StaticArrayInitTypeSize=98");
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_98* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_98>(get_class());
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_98__Boxed* box(app::_PrivateImplementationDetails_StaticArrayInitTypeSize_98 value) {
            return il2cpp::box_value<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_98__Boxed>(get_class(), value);
        }
    } // namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_98
} // namespace app::classes::types
