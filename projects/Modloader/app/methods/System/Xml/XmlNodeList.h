#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlNode.h>
#include <Modloader/app/structs/XmlNodeList.h>

namespace app::classes::System::Xml::XmlNodeList {
    IL2CPP_REGISTER_METHOD(0x01DC7CD0, app::XmlNode*, get_ItemOf, (app::XmlNodeList * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x005D2E60, void, IDisposable_Dispose, (app::XmlNodeList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PrivateDisposeNodeList, (app::XmlNodeList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XmlNodeList * this_ptr))
} // namespace app::classes::System::Xml::XmlNodeList
