#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SqlByteStorage__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SqlByteStorage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlByteStorage__Fields_DEFINED)
#include <Modloader/app/structs/DataStorage__Fields.h>
#if defined(IL2CPP_STRUCT_DataStorage__Fields_DEFINED)
#define IL2CPP_STRUCT_SqlByteStorage__Fields_DEFINED
struct SqlByte__Array;
struct SqlByteStorage__Fields {
    struct DataStorage__Fields _;
    struct SqlByte__Array* _values;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SqlByteStorage__Fields_FWDDECL)
#define IL2CPP_STRUCT_SqlByteStorage__Fields_FWDDECL
#include <Modloader/app/structs/SqlByte__Array.h>
#endif
#undef IL2CPP_STRUCT_SqlByteStorage__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SqlByteStorage__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SqlByteStorage__Fields_FWDDECL)
#include <Modloader/app/structs/SqlByteStorage__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SqlByteStorage__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
