#pragma once
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_320.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_320__Boxed.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_320__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_320 {
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_320__Class** type_info() {
            static app::_PrivateImplementationDetails_StaticArrayInitTypeSize_320__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_PrivateImplementationDetails_StaticArrayInitTypeSize_320__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_320__Class* get_class() {
            return il2cpp::get_nested_class<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_320__Class>(type_info(), "", "<PrivateImplementationDetails>", "__StaticArrayInitTypeSize=320");
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_320* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_320>(get_class());
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_320__Boxed* box(app::_PrivateImplementationDetails_StaticArrayInitTypeSize_320 value) {
            return il2cpp::box_value<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_320__Boxed>(get_class(), value);
        }
    } // namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_320
} // namespace app::classes::types
