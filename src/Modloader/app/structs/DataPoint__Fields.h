#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataPoint__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataPoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataPoint__Fields_DEFINED)
#include <Modloader/app/structs/DataBase__Fields.h>
#include <Modloader/app/structs/DataPointType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_DataBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_DataPointType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_DataPoint__Fields_DEFINED
struct String;
struct DataPoint__Fields {
    struct DataBase__Fields _;
    struct String* m_level;
    DataPointType__Enum m_type;

    struct Vector3 m_position;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataPoint__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataPoint__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DataPoint__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataPoint__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataPoint__Fields_FWDDECL)
#include <Modloader/app/structs/DataPoint__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataPoint__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
