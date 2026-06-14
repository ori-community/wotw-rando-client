#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemeSettingElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemeSettingElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemeSettingElement_DEFINED)
#define IL2CPP_STRUCT_SchemeSettingElement_DEFINED
struct SchemeSettingElement__Class;
struct SchemeSettingElement {
    struct SchemeSettingElement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SchemeSettingElement_FWDDECL)
#define IL2CPP_STRUCT_SchemeSettingElement_FWDDECL
#include <Modloader/app/structs/SchemeSettingElement__Class.h>
#endif
#undef IL2CPP_STRUCT_SchemeSettingElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemeSettingElement_DEFINED) && !defined(IL2CPP_STRUCT_SchemeSettingElement_FWDDECL)
#include <Modloader/app/structs/SchemeSettingElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemeSettingElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
