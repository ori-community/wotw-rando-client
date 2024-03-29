#pragma once
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_44.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_44__Boxed.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_44__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_44 {
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_44__Class** type_info() {
            static app::_PrivateImplementationDetails_StaticArrayInitTypeSize_44__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_PrivateImplementationDetails_StaticArrayInitTypeSize_44__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_44__Class* get_class() {
            return il2cpp::get_nested_class<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_44__Class>(type_info(), "", "<PrivateImplementationDetails>", "__StaticArrayInitTypeSize=44");
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_44* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_44>(get_class());
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_44__Boxed* box(app::_PrivateImplementationDetails_StaticArrayInitTypeSize_44 value) {
            return il2cpp::box_value<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_44__Boxed>(get_class(), value);
        }
    } // namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_44
} // namespace app::classes::types
