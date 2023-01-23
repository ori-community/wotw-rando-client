#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/_PrivateImplementationDetails__1__Class.h>
#include <Modloader/app/structs/_PrivateImplementationDetails__1.h>

namespace app::classes::types {
    namespace _PrivateImplementationDetails__1 {
        namespace {
            inline app::_PrivateImplementationDetails__1__Class* type_info_ref = nullptr;
        }
        inline app::_PrivateImplementationDetails__1__Class** type_info = &type_info_ref;
        inline app::_PrivateImplementationDetails__1__Class* get_class() {
            return il2cpp::get_class<app::_PrivateImplementationDetails__1__Class>(type_info, "", "<PrivateImplementationDetails>");
        }
        inline app::_PrivateImplementationDetails__1* create() {
            return il2cpp::create_object<app::_PrivateImplementationDetails__1>(get_class());
        }
    } // namespace _PrivateImplementationDetails__1
} // namespace app::classes::types
