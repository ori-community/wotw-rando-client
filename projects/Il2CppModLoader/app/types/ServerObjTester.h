#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerObjTester {
        namespace {
            app::ServerObjTester__Class* type_info_ref = nullptr;
        }
        app::ServerObjTester__Class** type_info = &type_info_ref;
        inline app::ServerObjTester__Class* get_class() {
            return il2cpp::get_class<app::ServerObjTester__Class>(type_info, "", "ServerObjTester");
        }
        inline app::ServerObjTester* create() {
            return il2cpp::create_object<app::ServerObjTester>(get_class());
        }
    } // namespace ServerObjTester
} // namespace app::classes::types
