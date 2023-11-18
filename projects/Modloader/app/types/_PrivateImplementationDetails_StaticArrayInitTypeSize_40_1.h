#pragma once
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_40_1.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_40_1__Boxed.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_40_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_40_1 {
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_40_1__Class** type_info() {
            static app::_PrivateImplementationDetails_StaticArrayInitTypeSize_40_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_PrivateImplementationDetails_StaticArrayInitTypeSize_40_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_40_1__Class* get_class() {
            return il2cpp::get_nested_class<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_40_1__Class>(type_info(), "", "<PrivateImplementationDetails>", "__StaticArrayInitTypeSize=40");
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_40_1* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_40_1>(get_class());
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_40_1__Boxed* box(app::_PrivateImplementationDetails_StaticArrayInitTypeSize_40_1 value) {
            return il2cpp::box_value<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_40_1__Boxed>(get_class(), value);
        }
    } // namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_40_1
} // namespace app::classes::types
