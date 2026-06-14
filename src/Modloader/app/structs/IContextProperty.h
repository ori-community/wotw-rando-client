#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IContextProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IContextProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContextProperty_DEFINED)
#define IL2CPP_STRUCT_IContextProperty_DEFINED
struct IContextProperty__Class;
struct IContextProperty {
    struct IContextProperty__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IContextProperty_FWDDECL)
#define IL2CPP_STRUCT_IContextProperty_FWDDECL
#include <Modloader/app/structs/IContextProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_IContextProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContextProperty_DEFINED) && !defined(IL2CPP_STRUCT_IContextProperty_FWDDECL)
#include <Modloader/app/structs/IContextProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IContextProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
