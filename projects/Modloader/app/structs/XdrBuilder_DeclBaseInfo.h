#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo_DEFINED)
#include <Modloader/app/structs/XdrBuilder_DeclBaseInfo__Fields.h>
#if defined(IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo_DEFINED
struct XdrBuilder_DeclBaseInfo__Class;
struct XdrBuilder_DeclBaseInfo {
    struct XdrBuilder_DeclBaseInfo__Class* klass;
    MonitorData* monitor;
    struct XdrBuilder_DeclBaseInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo_FWDDECL)
#define IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo_FWDDECL
#include <Modloader/app/structs/XdrBuilder_DeclBaseInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo_DEFINED) && !defined(IL2CPP_STRUCT_XdrBuilder_DeclBaseInfo_FWDDECL)
#include <Modloader/app/structs/XdrBuilder_DeclBaseInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XdrBuilder_DeclBaseInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
