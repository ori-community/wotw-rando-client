#pragma once
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_131070.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_131070__Boxed.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_131070__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_131070 {
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_131070__Class** type_info() {
            static app::_PrivateImplementationDetails_StaticArrayInitTypeSize_131070__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_PrivateImplementationDetails_StaticArrayInitTypeSize_131070__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_131070__Class* get_class() {
            return il2cpp::get_nested_class<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_131070__Class>(type_info(), "", "<PrivateImplementationDetails>", "__StaticArrayInitTypeSize=131070");
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_131070* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_131070>(get_class());
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_131070__Boxed* box(app::_PrivateImplementationDetails_StaticArrayInitTypeSize_131070 value) {
            return il2cpp::box_value<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_131070__Boxed>(get_class(), value);
        }
    } // namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_131070
} // namespace app::classes::types
