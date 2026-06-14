#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FieldBuilder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FieldBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldBuilder_DEFINED)
#define IL2CPP_STRUCT_FieldBuilder_DEFINED
struct FieldBuilder__Class;
struct FieldBuilder {
    struct FieldBuilder__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_FieldBuilder_FWDDECL)
#define IL2CPP_STRUCT_FieldBuilder_FWDDECL
#include <Modloader/app/structs/FieldBuilder__Class.h>
#endif
#undef IL2CPP_STRUCT_FieldBuilder_INITIALIZING
#if !defined(IL2CPP_STRUCT_FieldBuilder_DEFINED) && !defined(IL2CPP_STRUCT_FieldBuilder_FWDDECL)
#include <Modloader/app/structs/FieldBuilder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FieldBuilder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
