#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ContainerFilterService.h>
#include <Modloader/app/structs/ComponentCollection.h>

namespace app::classes::System::ComponentModel::ContainerFilterService {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ContainerFilterService * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00502220, app::ComponentCollection*, FilterComponents, (app::ContainerFilterService * this_ptr, app::ComponentCollection* components))
} // namespace app::classes::System::ComponentModel::ContainerFilterService
