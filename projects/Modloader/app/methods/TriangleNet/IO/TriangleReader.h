#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TriangleReader.h>
#include <Modloader/app/structs/StreamReader.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/List_1_TriangleNet_Geometry_Vertex_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Polygon.h>
#include <Modloader/app/structs/List_1_TriangleNet_Geometry_ITriangle_.h>
#include <Modloader/app/structs/IPolygon.h>
#include <Modloader/app/structs/Double__Array.h>
#include <Modloader/app/structs/List_1_TriangleNet_Geometry_Edge_.h>

namespace app::classes::TriangleNet::IO::TriangleReader {
    IL2CPP_REGISTER_METHOD(0x02622160, bool, TryReadLine, (app::TriangleReader * this_ptr, app::StreamReader* reader, app::String__Array** token))
    IL2CPP_REGISTER_METHOD(0x02622430, void, ReadVertex, (app::TriangleReader * this_ptr, app::List_1_TriangleNet_Geometry_Vertex_* data, int32_t index, app::String__Array* line, int32_t attributes, int32_t marks))
    IL2CPP_REGISTER_METHOD(0x026226F0, void, Read_1, (app::TriangleReader * this_ptr, app::String* filename, app::Polygon** polygon))
    IL2CPP_REGISTER_METHOD(0x02622830, void, Read_2, (app::TriangleReader * this_ptr, app::String* filename, app::Polygon** geometry, app::List_1_TriangleNet_Geometry_ITriangle_** triangles))
    IL2CPP_REGISTER_METHOD(0x02622940, app::IPolygon*, Read_3, (app::TriangleReader * this_ptr, app::String* filename))
    IL2CPP_REGISTER_METHOD(0x02622970, app::Polygon*, ReadNodeFile_1, (app::TriangleReader * this_ptr, app::String* nodefilename))
    IL2CPP_REGISTER_METHOD(0x02622980, app::Polygon*, ReadNodeFile_2, (app::TriangleReader * this_ptr, app::String* nodefilename, bool read_elements))
    IL2CPP_REGISTER_METHODINFO(0x04792498, TriangleReader_ReadNodeFile_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02622FE0, app::Polygon*, ReadPolyFile_1, (app::TriangleReader * this_ptr, app::String* polyfilename))
    IL2CPP_REGISTER_METHOD(0x02623000, app::Polygon*, ReadPolyFile_2, (app::TriangleReader * this_ptr, app::String* polyfilename, bool read_elements))
    IL2CPP_REGISTER_METHOD(0x02623020, app::Polygon*, ReadPolyFile_3, (app::TriangleReader * this_ptr, app::String* polyfilename, bool read_elements, bool read_area))
    IL2CPP_REGISTER_METHODINFO(0x047544F0, TriangleReader_ReadPolyFile_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02624310, app::List_1_TriangleNet_Geometry_ITriangle_*, ReadEleFile_1, (app::TriangleReader * this_ptr, app::String* elefilename))
    IL2CPP_REGISTER_METHOD(0x02624320, app::List_1_TriangleNet_Geometry_ITriangle_*, ReadEleFile_2, (app::TriangleReader * this_ptr, app::String* elefilename, bool read_area))
    IL2CPP_REGISTER_METHODINFO(0x0476F078, TriangleReader_ReadEleFile_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02624AA0, app::Double__Array*, ReadAreaFile, (app::TriangleReader * this_ptr, app::String* areafilename, int32_t intriangles))
    IL2CPP_REGISTER_METHODINFO(0x04762AF8, TriangleReader_ReadAreaFile__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02624F30, app::List_1_TriangleNet_Geometry_Edge_*, ReadEdgeFile, (app::TriangleReader * this_ptr, app::String* edge_file, int32_t invertices))
    IL2CPP_REGISTER_METHODINFO(0x04770D90, TriangleReader_ReadEdgeFile__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02625690, bool, IsStringNullOrWhiteSpace, (app::TriangleReader * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TriangleReader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02625770, void, cctor, ())
} // namespace app::classes::TriangleNet::IO::TriangleReader
