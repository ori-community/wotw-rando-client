#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ServerObjTester__Class.h>
#include <Modloader/app/structs/ServerObjTester.h>

namespace app::classes::types {
    namespace ServerObjTester {
        namespace {
            inline app::ServerObjTester__Class* type_info_ref = nullptr;
        }
        inline app::ServerObjTester__Class** type_info = &type_info_ref;
        inline app::ServerObjTester__Class* get_class() {
            return il2cpp::get_class<app::ServerObjTester__Class>(type_info, "", "ServerObjTester");
        }
        inline app::ServerObjTester* create() {
            return il2cpp::create_object<app::ServerObjTester>(get_class());
        }
    } // namespace ServerObjTester
} // namespace app::classes::types
