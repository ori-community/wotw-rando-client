#pragma once
#include <Modloader/app/structs/ServerObjTester.h>
#include <Modloader/app/structs/ServerObjTester__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerObjTester {
        inline app::ServerObjTester__Class** type_info() {
            static app::ServerObjTester__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerObjTester__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerObjTester__Class* get_class() {
            return il2cpp::get_class<app::ServerObjTester__Class>(type_info(), "", "ServerObjTester");
        }
        inline app::ServerObjTester* create() {
            return il2cpp::create_object<app::ServerObjTester>(get_class());
        }
    } // namespace ServerObjTester
} // namespace app::classes::types
