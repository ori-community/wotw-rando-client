#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/YouCanLeaveYourHatOn_AssetWithSize__Array__Class.h>
#include <Modloader/app/structs/YouCanLeaveYourHatOn_AssetWithSize__Array.h>

namespace app::classes::types {
    namespace YouCanLeaveYourHatOn_AssetWithSize__Array {
        namespace {
            inline app::YouCanLeaveYourHatOn_AssetWithSize__Array__Class* type_info_ref = nullptr;
        }
        inline app::YouCanLeaveYourHatOn_AssetWithSize__Array__Class** type_info = &type_info_ref;
        inline app::YouCanLeaveYourHatOn_AssetWithSize__Array__Class* get_class() {
            return il2cpp::get_class<app::YouCanLeaveYourHatOn_AssetWithSize__Array__Class>(type_info, "", "YouCanLeaveYourHatOn+AssetWithSize[]");
        }
        inline app::YouCanLeaveYourHatOn_AssetWithSize__Array* create() {
            return il2cpp::create_object<app::YouCanLeaveYourHatOn_AssetWithSize__Array>(get_class());
        }
    } // namespace YouCanLeaveYourHatOn_AssetWithSize__Array
} // namespace app::classes::types
