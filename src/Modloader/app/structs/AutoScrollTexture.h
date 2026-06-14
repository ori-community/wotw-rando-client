#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutoScrollTexture_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutoScrollTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoScrollTexture_DEFINED)
#include <Modloader/app/structs/AutoScrollTexture__Fields.h>
#if defined(IL2CPP_STRUCT_AutoScrollTexture__Fields_DEFINED)
#define IL2CPP_STRUCT_AutoScrollTexture_DEFINED
struct AutoScrollTexture__Class;
struct AutoScrollTexture {
    struct AutoScrollTexture__Class* klass;
    MonitorData* monitor;
    struct AutoScrollTexture__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AutoScrollTexture_FWDDECL)
#define IL2CPP_STRUCT_AutoScrollTexture_FWDDECL
#include <Modloader/app/structs/AutoScrollTexture__Class.h>
#endif
#undef IL2CPP_STRUCT_AutoScrollTexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutoScrollTexture_DEFINED) && !defined(IL2CPP_STRUCT_AutoScrollTexture_FWDDECL)
#include <Modloader/app/structs/AutoScrollTexture.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutoScrollTexture.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
