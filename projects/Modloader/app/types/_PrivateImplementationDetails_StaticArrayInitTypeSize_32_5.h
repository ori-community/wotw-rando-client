#pragma once
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_32_5.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_32_5__Boxed.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_32_5__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_32_5 {
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_32_5__Class** type_info() {
            static app::_PrivateImplementationDetails_StaticArrayInitTypeSize_32_5__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_PrivateImplementationDetails_StaticArrayInitTypeSize_32_5__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_32_5__Class* get_class() {
            return il2cpp::get_nested_class<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_32_5__Class>(type_info(), "", "<PrivateImplementationDetails>", "__StaticArrayInitTypeSize=32");
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_32_5* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_32_5>(get_class());
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_32_5__Boxed* box(app::_PrivateImplementationDetails_StaticArrayInitTypeSize_32_5 value) {
            return il2cpp::box_value<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_32_5__Boxed>(get_class(), value);
        }
    } // namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_32_5
} // namespace app::classes::types
