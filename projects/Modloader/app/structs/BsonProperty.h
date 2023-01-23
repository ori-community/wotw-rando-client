#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BsonProperty_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BsonProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonProperty_DEFINED)
#include <Modloader/app/structs/BsonProperty__Fields.h>
#if defined(IL2CPP_STRUCT_BsonProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_BsonProperty_DEFINED
struct BsonProperty__Class;
struct BsonProperty {
    struct BsonProperty__Class* klass;
    MonitorData* monitor;
    struct BsonProperty__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BsonProperty_FWDDECL)
#define IL2CPP_STRUCT_BsonProperty_FWDDECL
#include <Modloader/app/structs/BsonProperty__Class.h>
#endif
#undef IL2CPP_STRUCT_BsonProperty_INITIALIZING
#if !defined(IL2CPP_STRUCT_BsonProperty_DEFINED) && !defined(IL2CPP_STRUCT_BsonProperty_FWDDECL)
#include <Modloader/app/structs/BsonProperty.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BsonProperty.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
