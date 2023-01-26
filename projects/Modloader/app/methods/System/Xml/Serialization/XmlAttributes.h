#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XmlAttributes.h>
#include <Modloader/app/structs/ICustomAttributeProvider.h>
#include <Modloader/app/structs/Nullable_1_Int32_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/XmlAnyAttributeAttribute.h>
#include <Modloader/app/structs/XmlAnyElementAttributes.h>
#include <Modloader/app/structs/XmlArrayAttribute.h>
#include <Modloader/app/structs/XmlArrayItemAttributes.h>
#include <Modloader/app/structs/XmlAttributeAttribute.h>
#include <Modloader/app/structs/XmlChoiceIdentifierAttribute.h>
#include <Modloader/app/structs/XmlElementAttributes.h>
#include <Modloader/app/structs/XmlRootAttribute.h>
#include <Modloader/app/structs/XmlTextAttribute.h>
#include <Modloader/app/structs/XmlTypeAttribute.h>

namespace app::classes::System::Xml::Serialization::XmlAttributes {
    IL2CPP_REGISTER_METHOD(0x01C9BDB0, void, ctor_1, (app::XmlAttributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C9C0C0, void, ctor_2, (app::XmlAttributes * this_ptr, app::ICustomAttributeProvider* provider))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XmlAnyAttributeAttribute*, get_XmlAnyAttribute, (app::XmlAttributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::XmlAnyElementAttributes*, get_XmlAnyElements, (app::XmlAttributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB950, app::XmlArrayAttribute*, get_XmlArray, (app::XmlAttributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::XmlArrayItemAttributes*, get_XmlArrayItems, (app::XmlAttributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::XmlAttributeAttribute*, get_XmlAttribute, (app::XmlAttributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::XmlChoiceIdentifierAttribute*, get_XmlChoiceIdentifier, (app::XmlAttributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Object*, get_XmlDefaultValue, (app::XmlAttributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::XmlElementAttributes*, get_XmlElements, (app::XmlAttributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00585310, bool, get_XmlIgnore, (app::XmlAttributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DFE800, bool, get_Xmlns, (app::XmlAttributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::XmlRootAttribute*, get_XmlRoot, (app::XmlAttributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBA0, app::XmlTextAttribute*, get_XmlText, (app::XmlAttributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::XmlTypeAttribute*, get_XmlType, (app::XmlAttributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C9C940, void, AddKeyHash, (app::XmlAttributes * this_ptr, app::StringBuilder* sb))
    IL2CPP_REGISTER_METHOD(0x01C9CEB0, app::Nullable_1_Int32_, get_Order, (app::XmlAttributes * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01C9D010, int32_t, get_SortableOrder, (app::XmlAttributes * this_ptr))
} // namespace app::classes::System::Xml::Serialization::XmlAttributes
