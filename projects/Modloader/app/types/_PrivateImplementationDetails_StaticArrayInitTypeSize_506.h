#pragma once
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_506.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_506__Boxed.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_506__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_506 {
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_506__Class** type_info() {
            static app::_PrivateImplementationDetails_StaticArrayInitTypeSize_506__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_PrivateImplementationDetails_StaticArrayInitTypeSize_506__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_506__Class* get_class() {
            return il2cpp::get_nested_class<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_506__Class>(type_info(), "", "<PrivateImplementationDetails>", "__StaticArrayInitTypeSize=506");
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_506* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_506>(get_class());
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_506__Boxed* box(app::_PrivateImplementationDetails_StaticArrayInitTypeSize_506 value) {
            return il2cpp::box_value<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_506__Boxed>(get_class(), value);
        }
    } // namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_506
} // namespace app::classes::types
