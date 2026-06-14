#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPlayerEditorConnectionNative_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPlayerEditorConnectionNative_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlayerEditorConnectionNative_DEFINED)
#define IL2CPP_STRUCT_IPlayerEditorConnectionNative_DEFINED
struct IPlayerEditorConnectionNative__Class;
struct IPlayerEditorConnectionNative {
    struct IPlayerEditorConnectionNative__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPlayerEditorConnectionNative_FWDDECL)
#define IL2CPP_STRUCT_IPlayerEditorConnectionNative_FWDDECL
#include <Modloader/app/structs/IPlayerEditorConnectionNative__Class.h>
#endif
#undef IL2CPP_STRUCT_IPlayerEditorConnectionNative_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlayerEditorConnectionNative_DEFINED) && !defined(IL2CPP_STRUCT_IPlayerEditorConnectionNative_FWDDECL)
#include <Modloader/app/structs/IPlayerEditorConnectionNative.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPlayerEditorConnectionNative.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
