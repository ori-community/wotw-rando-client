#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrBuilder_AttributeContent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrBuilder_AttributeContent_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_AttributeContent_DEFINED)
#include <Modloader/app/structs/XdrBuilder_AttributeContent__Fields.h>
#if defined(IL2CPP_STRUCT_XdrBuilder_AttributeContent__Fields_DEFINED)
#define IL2CPP_STRUCT_XdrBuilder_AttributeContent_DEFINED
struct XdrBuilder_AttributeContent__Class;
struct XdrBuilder_AttributeContent {
    struct XdrBuilder_AttributeContent__Class* klass;
    MonitorData* monitor;
    struct XdrBuilder_AttributeContent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XdrBuilder_AttributeContent_FWDDECL)
#define IL2CPP_STRUCT_XdrBuilder_AttributeContent_FWDDECL
#include <Modloader/app/structs/XdrBuilder_AttributeContent__Class.h>
#endif
#undef IL2CPP_STRUCT_XdrBuilder_AttributeContent_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_AttributeContent_DEFINED) && !defined(IL2CPP_STRUCT_XdrBuilder_AttributeContent_FWDDECL)
#include <Modloader/app/structs/XdrBuilder_AttributeContent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrBuilder_AttributeContent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
