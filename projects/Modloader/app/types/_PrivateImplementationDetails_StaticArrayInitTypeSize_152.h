#pragma once
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_152.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_152__Boxed.h>
#include <Modloader/app/structs/_PrivateImplementationDetails_StaticArrayInitTypeSize_152__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_152 {
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_152__Class** type_info() {
            static app::_PrivateImplementationDetails_StaticArrayInitTypeSize_152__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_PrivateImplementationDetails_StaticArrayInitTypeSize_152__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_152__Class* get_class() {
            return il2cpp::get_nested_class<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_152__Class>(type_info(), "", "<PrivateImplementationDetails>", "__StaticArrayInitTypeSize=152");
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_152* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_152>(get_class());
        }
        inline app::_PrivateImplementationDetails_StaticArrayInitTypeSize_152__Boxed* box(app::_PrivateImplementationDetails_StaticArrayInitTypeSize_152 value) {
            return il2cpp::box_value<app::_PrivateImplementationDetails_StaticArrayInitTypeSize_152__Boxed>(get_class(), value);
        }
    } // namespace _PrivateImplementationDetails_StaticArrayInitTypeSize_152
} // namespace app::classes::types
